<?php
	$name=$_POST['name'];
	if(isset($name)) {
		echo "Welcome $name<br>";
	} else {
		$html='<form method="POST" action="Soup_HW_04_update.php">
			Please Enter Your Name: <br>
			<input type="text" name="name" size="40"><br>
			<input type="submit" value="Submit" />
			</form>';
		echo $html;
	}
	echo "<a href=\"http://xssattackexamples.com/\">Click to Download</a>";
?>
