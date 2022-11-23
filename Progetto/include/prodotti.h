/*****************************************************************************
*
*    @file	prodotti.h
*    @date	xx.xx.xxxx
*    @version	xx.xx
*    @author 	XXXX YYYY
*
******************************************************************************
*
*    @brief 	Definisce la parte pubblica del file prodotti.c
*
******************************************************************************/

#ifndef PRODOTTI_H
#define PRODOTTI_H

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
int prodottiGetNProdotti (void);
int prodottiGetNome (int id, char* nome);
int prodottiGetPrezzo (int id, int* prezzo);
int prodottiGetQuantita (int id, int* q);
void prodottiCarica (int q);
int prodottiPreleva (int id);
int prodottiRitorna (int id);

#endif //PRODOTTI_H
