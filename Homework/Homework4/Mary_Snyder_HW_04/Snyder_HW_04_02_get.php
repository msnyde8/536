<?php
	$result = $_GET['enter-str'];
	if ($result == "")
		$result = "<br>";
?>

<html>
	<head>
		<title>Enter string</title>
	</head>
	<body id="body-color">
		<div id="Enter-str">
			<fieldset style="width:30%"><legend>Bolding string here</legend>
				<form method="GET" action="Snyder_HW_04_02_get.php">
					String: <br><input type="text" name="enter-str" size="40"><br>
					<input id="button" type="submit" name="submit" value="Bold"><br>
				</form>
				Result: <br>
				<b><?php print $result ?></b>
			</fieldset>
		</div>
	</body>
</html>
