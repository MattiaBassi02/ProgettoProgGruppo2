/*****************************************************************************
*
*    @file	spesa.h
*    @date	xx.xx.xxxx
*    @version	xx.xx
*    @author	XXXX YYYY
*
******************************************************************************
*
*    @brief 	Definisce la parte pubblica del file spesa.c
*
******************************************************************************/

#ifndef SPESA_H
#define SPESA_H

/**********************************************************
* COSTANTI PUBBLICHE
**********************************************************/


/**********************************************************
* TIPI DI DATO PUBBLICI
**********************************************************/


/**********************************************************
* VARIABILI ESPORTATE
**********************************************************/


/**********************************************************
* PROTOTIPI DELLE FUNZIONI ESPORTATE
**********************************************************/
void spesaSvuotaLista (void);
int spesaAggiungi(int id, char* nome, int prezzoUn);
int spesaGetIdAttuale (void);
int spesaIncAttuale (void);
int spesaDecAttuale (void);
int spesaGetSaldo (void);
int spesaDecrSaldo (int valore);
int spesaGetTotalePezzi (void);
int spesaGetPrimo (char* nome, int* q, int* prezzoTot);
int spesaGetProssimo (char* nome, int* q, int* prezzoTot);
int spesaGetPosAttuale (void);
int spesaSfogliaSu (void);
int spesaSfogliaGiù (void);


#endif //SPESA_H
