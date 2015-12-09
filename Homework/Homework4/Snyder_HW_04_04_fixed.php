<?php
	$name=htmlspecialchars($_GET['name'],ENT_QUOTES<'UTF-8');
	echo "Welcome $name<br>";
	echo "<a href=\"http://xssattackexamples.com/\">Click to Enter</a>";
?>
