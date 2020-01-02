<div class="navigationColumn">
  <div class="navigation">
    <table>
    
    <?php
    
    $thisfilename = $_SERVER["SCRIPT_NAME"];
    
    $titles=array("cz" => array("1"=>"aktuality","c. v. &amp; kontakty","portfolio","výstavy<br/>
        <hr style=\"width: 150px; height: 0; border-bottom: 1px dotted #000; margin-bottom: 10px; \"/>",
                     "kresba, malba","fotografie","instalace &amp; akce","weby &amp; design","texty"),
                  "en" => array("1"=>"news", "c. v. &amp; contacts","portfolio","exhibitions<br/>
        <hr style=\"width: 150px; height: 0; border-bottom: 1px dotted #000; margin-bottom: 10px; \"/>",
                      "drawing, painting", "photography","installations &amp; actions","websites &amp; design","texts"));
    $filenames=array("1"=>"", "cv.html","portfolio/","exhibitions/",
                  "painting/","photos/","installations/","websites/","texts/");
    
    echo "<tr><td>";
    
    if(!StrPos(" " . $thisfilename,"/en/")) {
        $language="cz";
        if($thisfilename=="/old-web/index.html")
            echo "<img src=\"/old-web/images/andilek2.gif\"/ alt=\"\"></td><td class=\"currentSection\">";
        else
            echo "</td><td>";
        echo "<a href=\"/old-web/\">" . $titles[$language][1] . "</a>";
    }
    else {
        $language="en";
        if($thisfilename=="/old-web/en/index.html")
            echo "<img src=\"/old-web/images/andilek2.gif\"/ alt=\"\"></td><td class=\"currentSection\">";
        else
            echo "</td><td>";
        echo "<a href=\"/old-web/en/\">" . $titles[$language][1] . "</a>";
    }      
    
    echo "</td></tr>";   
    
    for ($i=2;$i<=count($filenames);$i++) {
        echo "<tr><td>";
        
        if(StrPos(" " . $thisfilename, $filenames[$i]))
            echo "<img src=\"/old-web/images/andilek2.gif\"/ alt=\"\"></td><td class=\"currentSection\">";
        else
            echo "</td><td>";
        
        if($language=="cz") {
            echo "<a href=\"/old-web/";
        } else {
            echo "<a href=\"/old-web/en/";
        }
        echo $filenames[$i] . "\">" . $titles[$language][$i] . "</a>";
        echo "</td></tr>";
    }
		
	?>
		
	</table>
	
	<p style="position: relative; left: 100px; overflow: hidden;margin-top: 4.5em;">
	<?php
	if(($thisfilename=="/old-web/index.html") || ($thisfilename=="/old-web/en/index.html"))
	  echo "<img src=\"/old-web/images/policajt.gif\" style=\"width: 150px; border: none; text-align: center; overflow: hidden;\" alt=\"\"/>";
    ?>
    
	</p>
	<p/><p/>
                
	</div>
           
</div>
