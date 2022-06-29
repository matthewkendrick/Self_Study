<?php 

  $color = $colorFromGet ?? filter_input(INPUT_COOKIE, 'color') ?? 'transparent';

?>
<!DOCTYPE html>
<html lang="ja">
<head>
  <meta charset="utf-8">
  <link rel="stylesheet" href="./css/styles.css">
  <script src="https://kit.fontawesome.com/051eb814e7.js" crossorigin="anonymous"></script>
  <title>PHP Practice</title>
</head>
<body style="background-color: <?= h($color); ?>;">