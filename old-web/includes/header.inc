<div class="header">

        <ul>

            <li class="select">

            

            <?php

            

            $filename = $_SERVER["SCRIPT_NAME"];

            if(StrPos($filename,"index.html"))

                $filename=SubStr($filename,0,strlen($filename)-10);

            

            if(!StrPos(" " . $filename,"/en/")) {

               

                

               echo("&mdash;&mdash;<span class=\"currentSection\">èesky</span>&ndash;<a href=\"/old-web/en"

                 . substr($filename,8) . "\">english</a>&mdash;&mdash;");

            }

            else {

                

                

               echo("&mdash;&mdash;<a href=\"/old-web" . SubStr($filename,11)

                 . "\">èesky</a>&ndash;<span class=\"currentSection\">english</span>&mdash;&mdash;");

            }

                

            ?>

            

            </li>    

        </ul>

        <ul style="margin-top: 0.7em; font-size: 1.2em; color: yellow; font-weight: bold;">

        <li>Vojtìch Ma¹a</li>

        </ul>

</div>

