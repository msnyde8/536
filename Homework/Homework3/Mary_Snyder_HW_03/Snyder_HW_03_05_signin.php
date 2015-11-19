<?php
	define('DB_HOST', 'localhost'); 
	define('DB_NAME', 'test_db'); 
	define('DB_USER', 'seed'); 
	define('DB_PASSWORD',''); 
	$con=mysql_connect(DB_HOST,DB_USER,DB_PASSWORD) or die("Failed to connect to MySQL: " . mysql_error()); 
	$db=mysql_select_db(DB_NAME,$con) or die("Failed to connect to MySQL: " . mysql_error()); 
	
	$query = sprintf("SELECT * FROM Users WHERE user_name='%s' AND passwd='%s'", $_POST['user'], $_POST['pass']);
	echo "$query \n";
	echo "\n";
	$result = mysql_query($query);
	$row = mysql_fetch_assoc($result); 
	if ($row) {
    	   echo $row['user_name'] . " successfully logged in!\n";
	} else  {
           echo "Error Logging in!";
	}
	mysql_free_result($result);
?>

