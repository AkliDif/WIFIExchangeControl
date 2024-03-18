#ifndef __DATA_H__
#define __DATA_H__

#include <stdio.h>

// Définition de la trame RTS
struct RTS_Packet {
    short fc;
    short duration;
    char addr1[6];
    char addr2[6];
    int fcs;
};

// Définition de la trame CTS
struct CTS_Packet {
    short fc;
    short duration;
    char addr1[6];
    int fcs;
};

// Définition de la trame ACK
struct ACK_Packet {
    short fc;
    short duration;
    char addr1[6];
    int fcs;
};

// Définition de la trame DATA
struct DATA_Packet {
    short fc;
    short duration;
    char addr1[6];
    char addr2[6];
    char addr3[6];
    int fcs;
};

// Fonction pour afficher les trames
void printRTS(struct RTS_Packet *rts);
void printCTS(struct CTS_Packet *cts);
void printACK(struct ACK_Packet *ack);
void printDATA(struct DATA_Packet *data);

// Fonction pour lire les trames
void readRTS(struct RTS_Packet *rts, FILE *file);
void readCTS(struct CTS_Packet *cts, FILE *file);
void readACK(struct ACK_Packet *ack, FILE *file);
void readDATA(struct DATA_Packet *data, FILE *file);

// Fonction pour écrire les trames
void writeRTS(struct RTS_Packet *rts, FILE *file);
void writeCTS(struct CTS_Packet *cts, FILE *file);
void writeACK(struct ACK_Packet *ack, FILE *file);
void writeDATA(struct DATA_Packet *data, FILE *file);

// Fonction pour vérifier la validité des trames
int checkRTS(struct RTS_Packet *rts);
int checkCTS(struct CTS_Packet *cts);
int checkACK(struct ACK_Packet *ack);
int checkDATA(struct DATA_Packet *data);

// Fonction pour vérifier la validité des adresses MAC
int checkMAC(char *addr);

// Fonction pour vérifier la validité des FCS
int checkFCS(int fcs);

// Fonction pour vérifier la validité des durées
int checkDuration(short duration);

// Fonction pour vérifier la validité des champs de contrôle
int checkFC(short fc);

// Envoie d'une trame RTS
void sendRTS(struct RTS_Packet *rts, FILE *file);

// Envoie d'une trame CTS
void sendCTS(struct CTS_Packet *cts, FILE *file);

// Envoie d'une trame ACK
void sendACK(struct ACK_Packet *ack, FILE *file);

// Envoie d'une trame DATA
void sendDATA(struct DATA_Packet *data, FILE *file);

// Réception d'une trame RTS
void receiveRTS(struct RTS_Packet *rts, FILE *file);

// Réception d'une trame CTS
void receiveCTS(struct CTS_Packet *cts, FILE *file);

// Réception d'une trame ACK
void receiveACK(struct ACK_Packet *ack, FILE *file);

// Réception d'une trame DATA
void receiveDATA(struct DATA_Packet *data, FILE *file);







#endif