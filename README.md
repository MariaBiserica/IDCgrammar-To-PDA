# Construirea unui automat push-down pentru o gramatica IDC
Sa se scrie o aplicatie care pentru o gramatica generativa IDC G construieste 
un automat push-down M = (Q, Σ, Γ, δ, q0, Z0, ∅), pentru care T(M) = L(G).

In functia principala se citeste din fisier o gramatica IDC. Se verifica daca gramatica este valida si IDC. Numai in caz afirmativ se obtine APD-ul corespunzator si devine activ meniul urmator:

(a) afisarea gramaticii G
(b) generarea unui cuvânt în gramatica
(c) afisarea rezultatului gramaticii simplificate
(d) afisarea gramaticii in FNG
(e) generarea unui cuvânt în G si verificarea daca e acceptat de automat
(f) verificarea daca un cuvânt citit de la tastatura e acceptat de automat
