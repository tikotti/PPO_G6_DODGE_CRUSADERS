#ifndef SEND_WIN_H
#define SEND_WIN_H

#include <QTcpSocket>
#include <QObject>

class QTcpSocket;
class QNetworkSession;

class Send_Win : public QObject
{
        Q_OBJECT

    public:
        Send_Win();

    private slots:
        void afficherErreur(QAbstractSocket::SocketError socketError);

    private:
        void envoiTexte( const std::string& s );

    private:
        QTcpSocket *m_tcpSocket;
        quint16 m_blockSize;
        QNetworkSession *m_networkSession;
};


#endif // SEND_WIN_H
