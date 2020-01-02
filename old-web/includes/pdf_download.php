<?php
header('Content-disposition: attachment; filename='.basename($_GET['filepath']));
header('Content-type: application/pdf');
readfile($_GET['filepath']);
?> 