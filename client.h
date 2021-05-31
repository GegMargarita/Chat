//@Margarita Geghamyan


    #include <stdio.h>
    #include <string.h>
    #include <sstream>
    #include <fstream>
    #include <errno.h>
    #include <iostream>
    #include <signal.h>
    #include <stdlib.h>
    #include <string>
    #include <sys/types.h>
    #include <sys/wait.h>
    #include <unistd.h>
    #include <unordered_map>
    #include <unordered_set>
    #include <algorithm>
    #include <arpa/inet.h>
    #include <vector>
    #include <netdb.h>
    #include <pthread.h>
    #include <netinet/in.h>
    #include <sys/socket.h>
    using namespace std;


    class client
    {
    public:
    int sockfd = -1;
    string username;
    string ipaddress;
    int listeningPort;
    client()
    {

    }
    client(string p_username,string p_ip,int p_port)
    {
    username = p_username;
    ipaddress = p_ip;
    listeningPort = p_port;
    }

    bool isConnected()
    {
    if(sockfd == -1)
    return false;
    return true;
    }


    };


    void client_rcv_welcome_msg();
    void thrrd_forsock(int);
    void client_rcv_first_msg();
    void searver_msg_undstd(int,char *var4);
    void onlinerequest_deletefrnd(int);
    void cl_read_frnd_msg(string, int);
    void cllogout_fromserv(bool);
    void cl_friend_loc_read(string messageBody);
    string login_msg(string,string);
    string register_msg(string,string);
    string location_msg(string, int);
    string send_msg(string,string);
    string invite_msg(string, string);
    string invite_acpt(string,string);
    string logout_msg();
    void config_file_reading(char *var4, string &p_host, int &p_port);
    void onlinerequest_deletefrnd(string);
    void client2client_msg(string,string);
    void client_rcv_welcome_msg();
    void thrrd_forsock(int);
    int clinet_to_other_machine_conn(const char *var2, int,bool);
    void client_rcv_first_msg();
    void searver_msg_undstd(int,char *var4);
    void onlinerequest_deletefrnd(int);
    void cl_read_frnd_msg(string, int);
    void cllogout_fromserv(bool);
    void cl_friend_loc_read(string messageBody);
    void invit_msg_readi(string);
    void c2server_socket_create(int);
    void *servconnwork(void *var2);
    void clint_signal_handling(int);
    void *cliacpt_connection(void *var2);
    void *proc_create(void *var2);
    int dif_server_sock;
    int dif_servpeer_sock=5100;
    string username="";
    vector<int> list_vect_csockpeer;
    unordered_set <string> list_vect_usersinct;
        bool stat_oflogin=false;
        unordered_map <string,client> list_vect_onlinefrnd;