#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop 

Lire les prenoms et les notes des eleves de la classe, tant que le prenom saisi est different de:
« X AE A-XII ». Verifier que la note saisie soit comprise entre 0 et 20.
Afficher ensuite:
la moyenne de la classe
la meilleure note de la classe et le prenom correspondant.
la moins bonne note de la classe et le prenom correspondant.  */

int compteur = 0 ;
int valide= 1;
char temp_prenom[30] = "";
float temp_note, moyenne, note_max ; 
int note_min = 21;
char eleve_max[30] = "";
char eleve_min[30] = "";

void afficherMoy(){
	moyenne = moyenne + temp_note;
	moyenne = moyenne / compteur;
	printf("Moyenne de la classe : %f \n", moyenne);		
}

void afficherMax(){
    if(temp_note > note_max){
        note_max = temp_note;
        int i = 0;
        while(i != 20){
            eleve_max[i] = temp_prenom[i];
            i++;
		}		
	}
	
	printf("Meilleure note: %f \n", note_max);
	printf("qui est : %s \n", eleve_max);
}

void afficherMin(){
    if(temp_note < note_min){
        note_min = temp_note;
        int j = 0;
        while(j != 20){
            eleve_min[j] = temp_prenom[j];
            j++;
		}		
	}
	
	printf("Qu'est tu fais la avec : %d \n", note_min);
	printf("qui est : %s \n", eleve_min);
}

int main (int argc, char** argv) {
	
	while (valide = 1){
		printf("Donne le prenom : ");
		scanf("%s", &temp_prenom);
		
		printf("Donne la note de se perdu : ");
		scanf("%f", &temp_note);
		
		compteur++;
		
		afficherMoy();
		
		afficherMax();
		
		afficherMin();
	}
	return 0;
}

