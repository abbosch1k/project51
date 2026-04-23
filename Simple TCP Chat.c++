#include <iostream>
#include <cstring>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>

using namespace std;

int main() {
    int sock = 0;
    struct sockaddr_in server_addr;
    char buffer[1024] = {0};

    sock = socket(AF_INET, SOCK_STREAM, 0);

    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(8080);

    inet_pton(AF_INET, "127.0.0.1", &server_addr.sin_addr);

    connect(sock, (struct sockaddr*)&server_addr, sizeof(server_addr));

    while (true) {
        string message;
        cout << "You: ";
        getline(cin, message);

        send(sock, message.c_str(), message.size(), 0);

        int valread = read(sock, buffer, 1024);
        cout << "Server: " << buffer << endl;

        memset(buffer, 0, sizeof(buffer));
    }

    close(sock);
}
