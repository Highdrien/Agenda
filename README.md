# Agenda en C++

**L’objectif de ce TP est de programmer une liste LIFO en C++.
On déficnie dans un premier temps des classes Date, Time et RDV pour ensuite définir Agenda, une liste chaînée. On définie aussi Sorted_Agenda, une liste chaînée ordonée.**

## Contenue

- [Implémentation de RDV](#implémentation-de-rdv)
  - [Date](#date)
  - [Time](#time)
  - [RDV](#rdv)
- [Liste chaînée](#liste-chaînée)
  - [Noeud](#noeud)
  - [Agenda](#agenda)
- [Liste chaînée ordonné](#liste-chaînée-ordonné)
  - [Sorted_Noeud](#sorted_noeud)
  - [Sorted_Agenda](#sorted_agenda)

# Implémentation de RDV

## Date
Cette première classe est destinée à gérer des dates, c’est-à-dire enregistrer un jour&nbsp;`day`, un
mois&nbsp;`month` et une année&nbsp;`year`&nbsp;:
- Un jour est un entier compris entre 1 et 31 (indépendamment du mois, pour simplifier).
- Un mois est un entier compris entre 1 et 12.
- Une année est un entier compris entre 1915 et 2050.

Cette classe contient les méthodes suivante&nbsp;:
- `Print()` qui affiche la date
- `compare(Date d)` qui compare la date avec 'd'. Renvoie -1 si d est avant, 0 si c'est la même date, et 1 si d est après.
- des Getteurs & des Setters

## Time
Destinée à gérer les heures, c’est-à-dire enregistrer une valeur entière pour les heures&nbsp;`hour` et une autre pour les minutes&nbsp;`minute`.

Cette classe contient les méthodes suivante&nbsp;:
- `Print()` qui affiche la l'heure
- `compare(Time d)` qui compare l'heure avec 't'. renvoie -1 si t est avant, 0 si c'est la même heure, et 1 si t est après.
- des Getteurs & des Setters

## RDV
RDV est une classe destinée à stocker chaque rendez-vous qui est constitué d'une date&nbsp;`d`, d'une heure&nbsp;`t`, d'un lieu&nbsp;`place`, d'une liste de participants&nbsp;`contributors`, et d'un nombre de participant&nbsp;`nb_contributors`.

Cette class contient les méthodes suivante&nbsp;:
- `RDV()` qui crée un rdv (d=01/01/1915, t=00:00, palce='Nowhere', nb_contributors=0)
- `Print()` qui affiche le RDV
- `add_contributor(string)` qui ajoute un participant au rdv
- `compare(RDV r)` qui compare le RDV avec 'r'. Renvoie -1 si r est avant, 0 si c'est la même date et la même heure, et 1 si r est après.
- des Getteurs & des Setters

# Liste chaînée

## Noeud
Noeud représente un maillon de la liste chaînée d'Agenda pour lequel l’information&nbsp;`rdv` sera un RDV et qui pointera&nbsp;`next` sur un autre maillon.

Cette classe contient les méthodes suivante&nbsp;:
- `Noeud(RDV, Noeud*)` qui crée un noeud avec un rdv qui pointe vers un autre noeud
- `Print()` qui affiche le rdv contenue dans le Noeud
- des Getteurs & des Setters

## Agenda
Agenda est une une liste chaînée de&nbsp;`Noeud`.

Cette classe contient les méthodes suivantes&nbsp;:
- `Agenda()` qui crée un agenda vide
- `Agenda(const Agenda&)` qui copie l'agneda
- `add(RDV rdv)` qui ajoute un rdv à l'agenda
- `suppr()` qui supprime le rdv de tête (= le deriner rdv ajouté)
- `clear()` qui supprimer tous les rdv de l'agenda
- `Print()` qui affiche l'agenda

# Liste chaînée ordonné

On souhaite remplacer l’agenda par un agenda ordonné pour gérer les rendez-vous. Notamment l’insertion d’un rendez-vous se fait avec une vérification de la date, et de même pour supprimer un rendez-vous. Il est donc nécessaire de reprogrammer les classes Agenda et Noeud.

## Sorted_Noeud
Sorted_Noeud représente un maillon de la liste chaînée ordonnée de Sorted_Agenda pour lequel l’information&nbsp;`rdv` sera un RDV, un pointeur&nbsp;`next` qui pointera sur le prochain maillon d'Agenda et un pointeur&nbsp;`previous` qui pointera vers le maillot précédant.

Cette classe contient les méthodes suivante&nbsp;:
- `Sorted_Noeud(RDV rdv, Sorted_Noeud* next, Sorted_Noeud* previous)` qui crée d'un Noeud avec un rdv et un pointeur next
- `Print()` qui affiche le rdv contenue dans le Noeud
- des Getteurs & des Setters
  
## Sorted_Agenda
Sorted_Agenda est une une liste chaînée ordonnée de Sorted_Noeud

Cette classe contient les méthodes suivantes&nbsp;:
- `Agenda()` qui crée un agenda vide
- `Agenda(const Agenda&)` qui copie l'agneda
- `add(RDV rdv)` qui ajoute un rdv à l'agenda
- `suppr()` qui supprime le rdv de tête (= le rdv le plus tôt)
- `clear()` qui supprimer tous les rdv de l'agenda
- `Print()` qui affiche l'agenda
