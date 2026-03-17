# -*- coding: utf-8 -*-
"""
Created on Fri Oct 17 09:25:26 2025

@author: e2500285
"""
"""
#Exercice 1
liste=[4,5,6,7,8,9,10,11,12,13]
print("Liste initiale :",liste)
liste.append(16)
print("Après ajout de 16:",liste)
liste.reverse()
print("Liste triée par ordre décroissant:", liste)
liste.remove(5)
print("Après suppression de 5:",liste)
sousliste=[liste[4],liste[9]]
print ("Sous-liste (5e et 10e éléments:" ,sousliste)


#Exercice 2
x=int(input("Entrez un nombre positif"))
if x %2==0:
    print ("PAIR")
else:
    print ("IMPAIR")
    
if x%4==0:
    print(f"{x} est divisible par 4")
else:
    print(f"{x} n'est pas divisible par 4")
    
c = 0
if x%4++0:
    f*=4
    c = 0
    for i in range():
        c +=i
print(f"Le nombre de divisions successives par 4 est {c}")

#Exercice 3
def Remise():
    remise=(prix*remise)/100
    
prix=float(input("Entrer le prix initial de l'article:"))
pourcentage_remise=float(input("Entrer le pourcentage de remise:"))
print("Prix initial:",prix)
print("Pourcentage de remise:",pourcentage_remise,"%")
prix_final=prix-remise
print("Prix après remise:",prix_final)

#Exercice 4
n=int(input("Entrer un entier n:"))
s=1
for i in range (1,n+1,2):
    s*=i
print(f"Le produit des nombres impairs juqu'à {n} est {s} ")
"""
#Exercice 5

txt=input("Saisir un phrase:")

def point():
    if txt.endswith("."):
        print("La phrase se termine par un point")
    else:
        print("La phrase ne se termine pas par un point")
        
def premier_car():
    print("Phrase avec première lettre de chaque mot en majuscule:",txt.capitalize())
    
def majuscule():
    print("Phrase en majuscule:",txt.upper())
    
def tabulation():
    print("Phrase avec espaces remplacés par un point '.'",txt.replace(" ","."))
    
def quitter():
    print("Au revoir!")
    
actions= {
    "1":point,
    "2":premier_car,
    "3":majuscule,
    "4":tabulation,
    "5":quitter,
}
while True:
    print("======MENU======")
    print("1-Vérifier si la phrase se termine par un point")
    print("2-Afficher la phrase dans laquelle le premier caractere de chaque mot est en majuscule")
    print("3-Affiche la phrase en majuscule")
    print("4-Afficher la phrase en remplacant les espaces par des tabulations")
    print("5-Quitter\n")
    
choix=input("Entrer votre choix")
if choix in actions:
    choix=[action](5)
    
else:
    print("Choix invalide")
    

        
    
