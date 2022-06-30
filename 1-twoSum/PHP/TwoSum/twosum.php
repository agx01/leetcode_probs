<?php

class Solution {

    /**
     * @param Integer[] $nums
     * @param Integer $target
     * @return Integer[]
     */
    function twoSum($nums, $target) {
        $h = array();
        for($i = 0; $i < count($nums); $i++){
            echo $nums[$i];
            echo intval($target) - intval($nums[$i]);
            print_r("The value is:".isset($h[intval($target) - intval($nums[$i])]));
            if(isset($h[intval($target) - intval($nums[$i])])){
               
                $h[$nums[$i]] = $i;
            }
            else{
                $prev_i = $h[intval($target) - intval($nums[$i])];
                return array(0 => $prev_i, 1 => $i);
            }
        }
    }
}

$sol = new Solution();
$nums = array(2, 7, 11, 15);
$target = 9;
$result = $sol->twoSum($nums, $target);
print_r($result);
?>