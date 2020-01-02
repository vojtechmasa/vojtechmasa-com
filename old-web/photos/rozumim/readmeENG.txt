///////////////////////////////////////////////////////////////
/                                                             /
/  Readme for Rozumim=Razumem presentation program            /
/                                                             /
/  (c) 2008 Vojtech Masa                                      /
/                                                             /
///////////////////////////////////////////////////////////////

You can customize program by editing XML/presentation.xml file.
Here you have description of each tag in the XML file. For more
information you can check examples

XML/example1.xml
XML/example2.xml


1. parameters

    1.1 thumbnails
        
        1,1,1 marginFromTop
            
            You can set a margin from top of the window
            in pixels. If you will not enter anything. write
            some nonsense or
            if you will not write the tag at all,
            default value is 0.

        1.1.2 spaceBetween
         
            You can set a space between thumbnails.
            If you will not enter anything, write some
            nonsense or
            if you will not write the tag at all,
            default value is 0.

        1.1.3 width

            You can set a width of thumbnails.
            If you will not enter anything,
            write some nonsence or
            if you will not write the tag at all,
            default value is 'stretch'. It means that
            thumbnails will stretch their width to fit
            a width of the player window. 

        1.1.4 height
s
            You can set a height of thumbnails.
            If you will not enter anything,
            write some nonsence or
            if you will not write the tag at all,
            default value is 'keepRatio'. It means that
            a height of thumbnails will be automatically
            changed to keep ratio between width and height
            as it was in original dimensions of the thumbnail.

        1.1.5 align

            You can set horizontal align for thumbnails. You
            can choose from possibilities:

               left
               right
               center

            If you will not enter anything, write some
            nonsense or
            if you will not write the tag at all,
            default value is left.


        1.1.6 fade
 
             You can set fading of thumbnails with 2 parameters:
             
             1.1.6.1 ratio

                 Ratio parameter means how much will a thumbnail
                 fade when you will not point a cursor on it. Possible
                 values are from 0 (0 percent = an image is not
                 visible at all) to 1 (100 percent = an image is
                 fully visible). For example 0.5 means
                 50 percet. Value 0 is not allowed.
                 If you will not enter anything, write 0 or less,
                 write some nonsence or
                 if you will not write the tag at all,
                 default value is 1.

             1.1.6.2 speed
             
                  Speed of fading thumbnails. 0 or less means no
                  fading at all. You enter the speed of fading
                  in seconds.
                  If you will not enter anything,
                  write some nonsence or
                  if you will not write the tag at all,
                  default value is 0 = no fading.

         1.1.7 rotation

             You can set rotation of thumbnails with 2 parameters:

             1.1.7.1 angle

                  You can set the rotation for selected thumbnail
                  for specified angle. You have to
                  specify the angle in degrees. Rotation is
                  clockwise.
                  If you will not enter anything,
                  write some nonsence or
                  if you will not write the tag at all,
                  default value is 0 = no rotation.


             1.1.7.2 speed

                  For rotation of thumbnails you have to also set
                  speed of rotation in seconds.
                  If you will not enter anything,
                  write some nonsence or
                  if you will not write the tag at all,
                  default value is 0 = no rotation.

    1.2 fullSized parameters

    There you can enter parameters for showing full-sized images.

        1.2.1 width

        You can enter width of full-sized image in pixels.
        If you will not enter anything, write some nonsence or
        if you will not write the tag at all, default value
        is 'original'. It means that program will keep original
        width without resizing the image.

        1.2.2 height

        You can enter width of full-sized image in pixels.
        If you will not enter anything, write some nonsence or
        if you will not write the tag at all, default value
        is 'keepRatio'. It means that program will keep ratio
        of original dimensions of image as it is saved in file.
        So height will be set according to width of an image.


        1.2.3 marginFromTop

        You can set margin from the top of the screen of
        full-sized image, in pixels.
        You can enter width of full-sized image in pixels.
        If you will not enter anything, write some nonsence or
        if you will not write the tag at all, default value
        is 0.

        1.2.4 fadeSpeed

        You can set fading of full-sized images by entering its
        speed in seconds.
        If you will not enter anything, write some nonsence or
        if you will not write the tag at all, default value
        is 0 = no fading.

2 photos

Here you can enter paths of full-sized images and thumbnails.

    2.1 photo

    You have to enter one tag 'photo' for each photograph.
    For each tag you have to enter 2 attributes. To attribute
    'fullSized' you have to enter path to full-sized image and
    to attribute 'thumbnail' you have to enter path for
    thumbnail of the image. For more information, see examples
    of XML config files in the folder XML:

    XML/example1.xml
    XML/example2.xml

                  


                               