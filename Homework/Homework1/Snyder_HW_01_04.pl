#!/usr/bin/perl

use Cwd;

my $store_output = "2>&1 | tee -a";

my $del_command = "find . -name \"Snyder_HW_01_04*txt\" -o -name \"Snyder_HW_01_04*o\" -o -name \"Snyder_HW_01_04\"";
my $clear_command = "find . -name \"Snyder_HW_01_04*o\" -o -name \"Snyder_HW_01_04\"";
my @delete_files = `$del_command`;
foreach my $del_file (@delete_files)
{
	chomp $del_file;
	unlink $del_file;
}

for(my $i = 0; $i < 7; $i++)
{
	my @clear_files = `$clear_command`;
	foreach my $cl_file (@clear_files)
	{
		chomp $cl_file;
		unlink $cl_file;
	}

	my $filename = "";
	my $command_name = "Snyder_HW_01_04";
	my $command_options = "";

	if($i == 0)
	{
		# What is the effect of the option -Wall
		$filename = "Snyder_HW_01_04_a.txt";
		$command_options = "-Wall"
	}
	elsif ($i == 1)
	{
		# What is the effect of the option -pedantic?
		$filename = 'Snyder_HW_01_04_b.txt';
		$command_options = "-pedantic";
	}
	elsif (($i > 1) && ($i < 4))
	{
		# What is the difference in the size of the code compiled with and without -g?
		$filename = 'Snyder_HW_01_04_c.txt';
		$command_options = "-g";
		if ($i > 2)
		{
			open(my $fh, '>>', $filename) or die "Could not open file $filename";
			print $fh "\n\n";
			close $fh;
			$command_options = "";
		}
	}
	else # ($i == 4-6)
	{
		# What is the difference in the size of the code compiled with -O1, -O2, and -O3?
		$filename = 'Snyder_HW_01_04_d.txt';
		$command_options = "-O1";
		if ($i == 5)
		{
			open(my $fh, '>>', $filename) or die "Could not open file $filename";
			print $fh "\n\n";
			close $fh;
			$command_options = "-O2";
		}
		elsif ($i > 5)
		{
			open(my $fh, '>>', $filename) or die "Could not open file $filename";
			print $fh "\n\n";
			close $fh;
			$command_options = "-O3";
		}
	}

	open(my $fh, '>>', $filename) or die "Could not open file $filename";

	$command = "gcc -c $command_name.c $command_options $store_output $filename; gcc -o $command_name $command_name.o $command_options $store_output $filename"; 
	print $fh "$command\n";
	my @command_output = `$command`;

	$command = "ls -al Snyder_HW_01_04 Snyder_HW_01_04.o";
	print $fh "\n$command\n";
	@command_output = `$command $store_output $filename`;

	$command = "size Snyder_HW_01_04 Snyder_HW_01_04.o";
	print $fh "\n$command\n";
	@command_output = `$command $store_output $filename`;

	close $fh;
}
