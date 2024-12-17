Rapport du projet :

N'est pas parvenu à rendre le code opérationnel et donc n'a pas put tester si la théorie était correcte.


Le code se divise en trois fichiers cpp :

Le premier sert à contenir la fonction main.

Le second, nommé Player, sert à contenir toutes les focntions relatives uniquement aux joueurs (et à la potentiel IA naïve).

  Il contient une struct Player qui, comme indiqué dans la consigne, permettra de creer un objet représentant le joueur.
  
  Il contient une fonction créant un joueur avec l'utilisation de Player.
  
  Il contient aussi une fonction créant player pour une IA naïve. Ele prend en compte le symbole utilisé par le joueur pour éviter une erreur de programmation et permettre une meilleur lisibilité.
  
Le dernier, nommé Board, sert à contenir toutes les fonctions relatives à la partie en elle même et le visuel.

  Il continent une struct Deroulement qui permettra de créer un objet déterminant qui joue et qui jouera ensuite.
  
  Il contient également deux fonctions vérifiant si la partie est finie.
  
  Il contient une fonction affichant l'état de la partie en cours.
  
  Il contient deux fonctions qui permettent de faire évoluer la partie.
  
  Enfin il contient deux fonctions qui intéragissent téhoriquement avec le ou les joueurs.
  

Pour y jouer il faut téoriquement entré la case que l'on veut prendre, suivant cette numérotation:

1|2|3

4|5|6

7|8|9

Une case non-remplie équivaut à un '.'.


Améliorations possibles : 

Dans la théorie, deux actions peuvent causer un bug :

  si le joueur prendre le nom 'AI' dans la partie contre l'IA, son se retrouve alors avec deux IA naïves se combattant
  
  si le joueur utilise '.' comme symbole, la partie ne prendra pas en compte ses coups vu qu'ils seront confondu avec des cases non remplies.

  
L'ajout des améliorations proposées étant au dela de mes compétences, mon code n'aurait pas pu aller plus loin.


Bilan des problèmes survenus : 

  L'uitlisations de deux fonctions séparées en fonction de la présence d'une IA. Je n'ai pas trouvé d'idée pour résoudre se problème.
  
  L'échec à rendre le code opérationnel. Je ne suis pas parvenu à déterminer là où je m'étais trompé.
  
  L'échec à utiliser la fonction permettant de nettoyer le terminal. Je n'ai pas non plus trouver l'origine du problème.
