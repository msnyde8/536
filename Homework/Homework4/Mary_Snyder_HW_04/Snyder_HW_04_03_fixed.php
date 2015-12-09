<?php
	$value=$_POST['name'];
	$name=htmlspecialchars($value,ENT_QUOTES,'UTF-8');
	if(isset($value)) {
		echo "Welcome $name<br>";
	} else {
		$html='<form method="POST" action="Snyder_HW_04_03_fixed.php">
			Please Enter Your Name: <br>
			<input type="text" name="name" size="40"><br>
			<input type="submit" value="Submit" />
			</form>';
		echo $html;
	}
?>
