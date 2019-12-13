 #include <QtNetwork>
#include <QThread>
#include <iostream>
#include <sstream>
#include "Send_Win.h"

Send_Win::Send_Win()
    :   m_networkSession(0)
{
    std::cout << "Application Client" << std::endl;

}

Send_Win::~Send_Win()
{

}

void Send_Win::gagner()
{
    std::cout << "gagner" << std::endl;
    m_tcpSocket = new QTcpSocket(this);

    // La méthode afficherErreur sera appelée sur le signal error
    connect(m_tcpSocket, SIGNAL(error(QAbstractSocket::SocketError)),
            this, SLOT(afficherErreur(QAbstractSocket::SocketError)));

    QNetworkConfigurationManager manager;
    QNetworkConfiguration config;

    std::cout << "Ouverture session" << std::endl;
    m_networkSession = new QNetworkSession(config, this);

    m_networkSession->open();

    m_blockSize = 0;
    m_tcpSocket->abort();

    // connexion au serveur sur le port 53000
    m_tcpSocket->connectToHost( QHostAddress("10.16.3.214").toString(),53000 );

    //sleep(1°);

    envoiTexte("GAGNE:6");

    // déconnexion au serveur
    //m_tcpSocket->disconnect();
}

//###############################################################################################################
// Méthode appelée lors d'un déclenchement d'une excepetion sur un socket
void Send_Win::afficherErreur(QAbstractSocket::SocketError socketError)
{
    switch (socketError) {
    case QAbstractSocket::RemoteHostClosedError:
        break;
    case QAbstractSocket::HostNotFoundError:
        std::cout << "Le serveur n'a pas ete trouve. Verifiez le parametrage du serveur et du port." << std::endl;
        break;
    case QAbstractSocket::ConnectionRefusedError:
        std::cout << "La communication a ete refusee. Verifiez que le serveur est pret, ainsi que le parametrage du serveur et du port." << std::endl;
        break;
    default:
        std::cout << "L'erreur suivante s'est produite : " << m_tcpSocket->errorString().toStdString() << std::endl;
    }
}


//###############################################################################################################
// Méthode envoyant un texte au serveur
void Send_Win::envoiTexte( const std::string& s )
{
    QString texte = tr(s.c_str());
    QByteArray block;
    QDataStream out(&block, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_4_0);
    out << (quint16)0;
    out << texte;
    out.device()->seek(0);
    out << (quint16)(block.size() - sizeof(quint16));

    m_tcpSocket->write(block);
}
