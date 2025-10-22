## 📄 Général
- **Ecriture d'un argument du printf :** %[flag][width][.precision][length]specifier
- Pour width et .precision, si on écrit * et .*, on peut les allouer dynamiquement (exemple : printf("%*d", 5 12) va afficher : "   12").

## 🚩 Flags
### +
- Force l'affichage du signe devant les nombre positifs et négatifs (normalement négatifs sont déjà présents).
- Spécificateurs : %d, %i, %f, %F, %e, %E, %g, %G, %a, %A

### -
- Justifie la sortie à gauche au lieu d'à droite
- N'a de sens qu'avec [width], et place d'abord le contenu du spécificateur, puis les espaces en trop
- Fonctionne avec tous les spécificateurs

### (**_space_**)
- Rajoute un espace avant les nombres positifs
- Est ignoré quand il y a déjà le flag +
- Spécificateurs : %d, %i, %f, %F, %e, %E, %g, %G, %a, %A (mêmes que pour +)

### '#'
- Pour %x, %X et %o, met 0x, 0X et 0 devant le résultats
- Pour %g, %G, %e, %E, %f et %F, force l'affichage du point après la partie entière, même s'il n'y a rien derrière

### 0
- Remplace les espaces par des 0
- N'a de sens qu'avec [width], et pour %x, %X, %a et %A, il met les 0 entre le 0x ou 0X et le résultat de la conversion
- S'il y a déjà le flag -, le 0 est ignoré
- Fonctionne avec tout les spécificateurs, sauf %c, %s, %p et %%

## 📏 Width
- C'est le nombre de caractères à afficher à l'écran, et s'il est plus grand que l'affichage, il doit rajouter des espaces, avant (à gauche) par défaut

## 🎯 .precision
### Avec les entiers -> %i et %d, %x, %X et %u
Rajoute des 0 en plus devant si la précision est supérieures strictement au nombre de chiffres

### Avec les nombres flottants -> %f, %F, %e, %E, %g et %G
- C'est le nombre de chiffres après la virgule

### Avec une chaîne de caractères -> %s
- C'est le nombre de caractères à afficher

## ❌​ Length
On a pas à le faire