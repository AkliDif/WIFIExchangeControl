#include <stdio.h>
#include <stdlib.h>
#include "data.h"

// Fonction pour lire les trames
void readRTS(struct RTS_Packet *rts, FILE *file)
{
    fread(rts, sizeof(struct RTS_Packet), 1, file);
}

// void readCTS(struct CTS_Packet *cts, FILE *file)
// {

// }
// void readACK(struct ACK_Packet *ack, FILE *file)
// {

// }
// void readDATA(struct DATA_Packet *data, FILE *file)
// {

// }

// // Fonction pour écrire les trames
// void writeRTS(struct RTS_Packet *rts, FILE *file)
// {

// }
// void writeCTS(struct CTS_Packet *cts, FILE *file)
// {

// }
// void writeACK(struct ACK_Packet *ack, FILE *file)
// {

// }
// void writeDATA(struct DATA_Packet *data, FILE *file)
// {

// }

// // Fonction pour vérifier la validité des trames
// int checkRTS(struct RTS_Packet *rts)
// {
//     return 0;
// }
// int checkCTS(struct CTS_Packet *cts)
// {
//     return 0;
// }
// int checkACK(struct ACK_Packet *ack)
// {
//     return 0;
// }
// int checkDATA(struct DATA_Packet *data)
// {
//     return 0;
// }

// // Fonction pour vérifier la validité des adresses MAC
// int checkMAC(char *addr)
// {
//     return 0;

// }

// // Fonction pour vérifier la validité des FCS
// int checkFCS(int fcs)
// {
//     return 0;

// }

// // Fonction pour vérifier la validité des durées
// int checkDuration(short duration){
//     return 0;

// }

// // Fonction pour vérifier la validité des champs de contrôle
// int checkFC(short fc)
// {
//     return 0;
// }

// // Envoie d'une trame RTS
// void sendRTS(struct RTS_Packet *rts, FILE *file)
// {

// }

// // Envoie d'une trame CTS
// void sendCTS(struct CTS_Packet *cts, FILE *file)
// {

// }

// // Envoie d'une trame ACK
// void sendACK(struct ACK_Packet *ack, FILE *file)
// {

// }

// // Envoie d'une trame DATA
// void sendDATA(struct DATA_Packet *data, FILE *file)
// {

// }

// // Réception d'une trame RTS
// void receiveRTS(struct RTS_Packet *rts, FILE *file)
// {

// }

// // Réception d'une trame CTS
// void receiveCTS(struct CTS_Packet *cts, FILE *file)
// {
    
// }

// // Réception d'une trame ACK
// void receiveACK(struct ACK_Packet *ack, FILE *file)
// {

// }

// // Réception d'une trame DATA
// void receiveDATA(struct DATA_Packet *data, FILE *file)
// {

// }