////////////////////////////////////////////////////////////////
/                                                              /
/  Instrukce k pou�it� prezenta�n�ho programu Rozumim-Razumem  /
/                                                              /
/  (c) 2008 Vojtech Masa                                       /
/                                                              /
////////////////////////////////////////////////////////////////

Program si lze p�izp�sobit editac� souboru XML/presentation.xml
Zde p�edkl�d�m popis jednotliv�ch tag� v tomto souboru XML.
Pro v�ce informac� odkazuji na p��klady konfigurac� v souborech

XML/example1.xml
XML/example2.xml


1. parameters

    1.1 thumbnails
        
        1,1,1 marginFromTop
            
            Nastavuje se zde vrchn� okraj n�hled� obr�zk� od
            obrazovky v pixelech. Pokud nevypln�te nic,
            vypln�te nesmyslnou hodnotu nebo tag v�bec
            neuvedete, v�choz� (default) hodnota je 0.

        1.1.2 spaceBetween
         
            Zde se nastavuje mezera mezi jednotliv�mi n�hledy.
            Nastavuje se zde vrchn� okraj n�hled� obr�zk� od
            obrazovky v pixelech. Pokud nevypln�te nic,
            vypln�te nesmyslnou hodnotu nebo tag v�bec
            neuvedete, v�choz� (default) hodnota je 0.

        1.1.3 width

            Lze nastavit ���ku n�hled�.
            Pokud nevypln�te nic,
            vypln�te nesmyslnou hodnotu nebo tag v�bec
            neuvedete, v�choz� (default) hodnota je 'stretch'.
            To znamen�, �e se ���ka n�hled� nastav� tak, aby byly
            n�hledy rozta�eny na plnou ���ku velikosti okna.

        1.1.4 height

            Lze nastavit v��ku n�hled�.
            Pokud nevypln�te nic,
            vypln�te nesmyslnou hodnotu nebo tag v�bec
            neuvedete, v�choz� (default) hodnota je 'keepRatio'.
            To znamen�, �e v��ka n�hled� bude automaticky podle
            nastaven� ���ky n�hled�, aby propor�n� odpov�dala
            origin�ln�m rozm�r�m n�hledu.

        1.1.5 align

            Nastavuje horizont�ln� zarovn�n� n�hled�. Lze zvolit
            z mo�nost�:

               left   (zarovn�n� doleva)
               right  (zarovn�n� doprava)
               center (zarovn�n� na st�ed)

            Pokud nevypln�te nic,
            vypln�te nesmyslnou hodnotu nebo tag v�bec
            neuvedete, v�choz� (default) hodnota je 'left'
            (doleva).


        1.1.6 fade
 
             Lze nastavit ztlumov�n� n�hled� dv�ma parametry:
             
             1.1.6.1 ratio

                 Parametr 'ratio' znamen�, jak moc se n�hledy ztlum�,
                 pokud na n� neukazujeme kurzorem. Mo�n� hodnoty jsou
                 od 0 (0 procent - n�hled nen� v�bec vid�t) do 1
                 (100 procent - n�hled je �pln� viditeln�). Nap�.
                 0.5 = 50 procent. Hodnota 0 nen� v�ak dovolena.
                 Pokud nevypln�te nic, vypln�te 0 nebo m�n�,
                 vypln�te nesmyslnou hodnotu nebo tag v�bec
                 neuvedete, v�choz� (default) hodnota je 1
                 = bez ztlumov�n�.


             1.1.6.2 speed
             
                 Rychlost ztlumov�n� n�hled�. 0 nebo m�n� znamen�
                 neztlumovat v�bec. Jinak lze vlo�it rychlost
                 ztlumov�n� v sekund�ch.
                 Pokud nevypln�te nic, vypln�te 0 nebo m�n�,
                 vypln�te nesmyslnou hodnotu nebo tag v�bec
                 neuvedete, v�choz� (default) hodnota je 0
                 = bez ztlumov�n�.
                  

         1.1.7 rotation

             Lze nastavit ot��en� n�hled�:

             1.1.7.1 angle

                 Lze nastavit ot��en� vybran�ho n�hledu o zadan�
                 �hel. �hel nastavte ve stupn�ch. Ot��en� je
                 ve sm�ru hodinov�ch ru�i�ek.
                 Pokud nevypln�te nic
                 vypln�te nesmyslnou hodnotu nebo tag v�bec
                 neuvedete, v�choz� (default) hodnota je 0
                 = bez ot��en�.


             1.1.7.2 speed

                 Pro ot��en� n�hled� je t�eba nastavit tak�
                 rychlost ot��en� v sekund�ch.
                 Pokud nevypln�te nic
                 vypln�te nesmyslnou hodnotu nebo tag v�bec
                 neuvedete, v�choz� (default) hodnota je 0
                 = bez ot��en�.

    1.2 fullSized parameters

    Lze nastavit parametry pro zobrazen� obr�zk� v pln� velikosti.

        1.2.1 width

        Nastavuje se zde ���ka obr�zk� v pln� velikosti v pixelech.
        Pokud nevypln�te nic
        vypln�te nesmyslnou hodnotu nebo tag v�bec
        neuvedete, v�choz� (default) hodnota je 'original'.
        To znamen�, �e program zachov� rozm�r obr�zku, kter�
        je uveden v souboru obr�zku.

        1.2.2 height

        Nastavuje se zde ���ka obr�zk� v pln� velikosti v pixelech.
        Pokud nevypln�te nic
        vypln�te nesmyslnou hodnotu nebo tag v�bec
        neuvedete, v�choz� (default) hodnota je 'keepRatio'.
        To znamen�, �e program zachov� pom�r v��ky a ���ky obr�zku
        v z�vislosti na zadan� ���ce obr�zku z parametru 'width'.


        1.2.3 marginFromTop

        Nastavuje se zde horn� okraj obr�zku od okraje okna
        v pixelech.
        Pokud nevypln�te nic
        vypln�te nesmyslnou hodnotu nebo tag v�bec
        neuvedete, v�choz� (default) hodnota je 0.     

        1.2.4 fadeSpeed

        Lze nastavit rychlost ztlumov�n� obr�zk� v pln� velikosti
        v sekund�ch.
        Pokud nevypln�te nic
        vypln�te nesmyslnou hodnotu nebo tag v�bec
        neuvedete, v�choz� (default) hodnota je 0
        = bez ztlumov�n�.

2 photos

Lze nastavit cesta k soubor�m s obr�zky v pln� velikosti a
k soubor�m s n�hledy.

    2.1 photo

    Je t�eba zadat jeden tag 'photo' pro ka�dou fotografii.
    V ka�d�m tagu mus�te nastavit 2 attributy. Do atributu
    'fullSized' nastavujeme cestu k obr�zku v pln� velikosti
    a do atributu 'thumbnail' nastavujeme cestu k n�hledu.
    Pro dal�� informace si prohl�dn�te p��klady konfigura�n�ho
    souboru:

    XML/example1.xml
    XML/example2.xml

                  


                               