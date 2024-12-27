#!/bin/bash

N=8

# Boucle pour créer les dossiers ex00, ex01, ex02, ..., ex09
for ((i = 0; i < N; i++)); do

# On formate le nom du dossier avec 2 chiffres (par exemple ex00, ex01, ex02)
  folder_name=$(printf "ex%02d" $i)
  
# Création du dossier
mkdir "$folder_name"
  
# Affichage d'un message de confirmation
echo "Dossier $folder_name créé."
done
