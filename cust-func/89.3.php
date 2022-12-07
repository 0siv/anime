<?php
	$arr = ['a', ['b', 'c', 'd'], ['e', 'f', 
    ['g', ['j', 'k']]]];
    function func($arr) {
		foreach ($arr as $elem) {
			if (is_array($elem)) {
				func($elem);
			} else {
				echo $elem;
			}
		}
	}
    func(['a', ['b', 'c', 'd'], ['e', 'f', ['g', ['j', 'k']]]]);
?>