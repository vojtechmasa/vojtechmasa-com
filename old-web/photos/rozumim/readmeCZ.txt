////////////////////////////////////////////////////////////////
/                                                              /
/  Instrukce k použití prezentaèního programu Rozumim-Razumem  /
/                                                              /
/  (c) 2008 Vojtech Masa                                       /
/                                                              /
////////////////////////////////////////////////////////////////

Program si lze pøizpùsobit editací souboru XML/presentation.xml
Zde pøedkládám popis jednotlivých tagù v tomto souboru XML.
Pro více informací odkazuji na pøíklady konfigurací v souborech

XML/example1.xml
XML/example2.xml


1. parameters

    1.1 thumbnails
        
        1,1,1 marginFromTop
            
            Nastavuje se zde vrchní okraj náhledù obrázkù od
            obrazovky v pixelech. Pokud nevyplníte nic,
            vyplníte nesmyslnou hodnotu nebo tag vùbec
            neuvedete, výchozí (default) hodnota je 0.

        1.1.2 spaceBetween
         
            Zde se nastavuje mezera mezi jednotlivými náhledy.
            Nastavuje se zde vrchní okraj náhledù obrázkù od
            obrazovky v pixelech. Pokud nevyplníte nic,
            vyplníte nesmyslnou hodnotu nebo tag vùbec
            neuvedete, výchozí (default) hodnota je 0.

        1.1.3 width

            Lze nastavit šíøku náhledù.
            Pokud nevyplníte nic,
            vyplníte nesmyslnou hodnotu nebo tag vùbec
            neuvedete, výchozí (default) hodnota je 'stretch'.
            To znamená, že se šíøka náhledù nastaví tak, aby byly
            náhledy roztaženy na plnou šíøku velikosti okna.

        1.1.4 height

            Lze nastavit výšku náhledù.
            Pokud nevyplníte nic,
            vyplníte nesmyslnou hodnotu nebo tag vùbec
            neuvedete, výchozí (default) hodnota je 'keepRatio'.
            To znamená, že výška náhledù bude automaticky podle
            nastavené šíøky náhledù, aby proporènì odpovídala
            originálním rozmìrùm náhledu.

        1.1.5 align

            Nastavuje horizontální zarovnání náhledù. Lze zvolit
            z možností:

               left   (zarovnání doleva)
               right  (zarovnání doprava)
               center (zarovnání na støed)

            Pokud nevyplníte nic,
            vyplníte nesmyslnou hodnotu nebo tag vùbec
            neuvedete, výchozí (default) hodnota je 'left'
            (doleva).


        1.1.6 fade
 
             Lze nastavit ztlumování náhledù dvìma parametry:
             
             1.1.6.1 ratio

                 Parametr 'ratio' znamená, jak moc se náhledy ztlumí,
                 pokud na nì neukazujeme kurzorem. Možné hodnoty jsou
                 od 0 (0 procent - náhled není vùbec vidìt) do 1
                 (100 procent - náhled je úplnì viditelný). Napø.
                 0.5 = 50 procent. Hodnota 0 není však dovolena.
                 Pokud nevyplníte nic, vyplníte 0 nebo ménì,
                 vyplníte nesmyslnou hodnotu nebo tag vùbec
                 neuvedete, výchozí (default) hodnota je 1
                 = bez ztlumování.


             1.1.6.2 speed
             
                 Rychlost ztlumování náhledù. 0 nebo ménì znamená
                 neztlumovat vùbec. Jinak lze vložit rychlost
                 ztlumování v sekundách.
                 Pokud nevyplníte nic, vyplníte 0 nebo ménì,
                 vyplníte nesmyslnou hodnotu nebo tag vùbec
                 neuvedete, výchozí (default) hodnota je 0
                 = bez ztlumování.
                  

         1.1.7 rotation

             Lze nastavit otáèení náhledù:

             1.1.7.1 angle

                 Lze nastavit otáèení vybraného náhledu o zadaný
                 úhel. Úhel nastavte ve stupních. Otáèení je
                 ve smìru hodinových ruèièek.
                 Pokud nevyplníte nic
                 vyplníte nesmyslnou hodnotu nebo tag vùbec
                 neuvedete, výchozí (default) hodnota je 0
                 = bez otáèení.


             1.1.7.2 speed

                 Pro otáèení náhledù je tøeba nastavit také
                 rychlost otáèení v sekundách.
                 Pokud nevyplníte nic
                 vyplníte nesmyslnou hodnotu nebo tag vùbec
                 neuvedete, výchozí (default) hodnota je 0
                 = bez otáèení.

    1.2 fullSized parameters

    Lze nastavit parametry pro zobrazení obrázkù v plné velikosti.

        1.2.1 width

        Nastavuje se zde šíøka obrázkù v plné velikosti v pixelech.
        Pokud nevyplníte nic
        vyplníte nesmyslnou hodnotu nebo tag vùbec
        neuvedete, výchozí (default) hodnota je 'original'.
        To znamená, že program zachová rozmìr obrázku, který
        je uveden v souboru obrázku.

        1.2.2 height

        Nastavuje se zde šíøka obrázkù v plné velikosti v pixelech.
        Pokud nevyplníte nic
        vyplníte nesmyslnou hodnotu nebo tag vùbec
        neuvedete, výchozí (default) hodnota je 'keepRatio'.
        To znamená, že program zachová pomìr výšky a šíøky obrázku
        v závislosti na zadané šíøce obrázku z parametru 'width'.


        1.2.3 marginFromTop

        Nastavuje se zde horní okraj obrázku od okraje okna
        v pixelech.
        Pokud nevyplníte nic
        vyplníte nesmyslnou hodnotu nebo tag vùbec
        neuvedete, výchozí (default) hodnota je 0.     

        1.2.4 fadeSpeed

        Lze nastavit rychlost ztlumování obrázkù v plné velikosti
        v sekundách.
        Pokud nevyplníte nic
        vyplníte nesmyslnou hodnotu nebo tag vùbec
        neuvedete, výchozí (default) hodnota je 0
        = bez ztlumování.

2 photos

Lze nastavit cesta k souborùm s obrázky v plné velikosti a
k souborùm s náhledy.

    2.1 photo

    Je tøeba zadat jeden tag 'photo' pro každou fotografii.
    V každém tagu musíte nastavit 2 attributy. Do atributu
    'fullSized' nastavujeme cestu k obrázku v plné velikosti
    a do atributu 'thumbnail' nastavujeme cestu k náhledu.
    Pro další informace si prohlédnìte pøíklady konfiguraèního
    souboru:

    XML/example1.xml
    XML/example2.xml

                  


                               