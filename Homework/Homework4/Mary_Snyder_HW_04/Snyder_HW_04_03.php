<?php
	$name=$_POST['name'];
	if(isset($name)) {
		echo "Welcome $name<br>";
	} else {
		$html='<form method="POST" action="Snyder_HW_04_03.php">
			Please Enter Your Name: <br>
			<input type="text" name="name" size="40"><br>
			<input type="submit" value="Submit" />
			</form>';
		echo $html;
	}
?>
