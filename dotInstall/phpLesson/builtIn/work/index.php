<!DOCTYPE html>
<html lang="ja">
<head>
  <meta charset="UTF-8">
  <meta http-equiv="X-UA-Compatible" content="IE=edge">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <link rel="stylesheet" href="../css/stylesheet.css">
  <link href="https://fonts.googleapis.com/icon?family=Material+Icons" rel="stylesheet">
  <link rel="stylesheet" href="https://fonts.googleapis.com/css2?family=Material+Symbols+Rounded:opsz,wght,FILL,GRAD@20..48,100..700,0..1,-50..200" />
  <title>Document</title>
</head>
<body>
  <section>
    <div class="text">
      <p>
        <?php
          $input = '20200320Item-A  1200';
          $input = substr_replace($input, 'Item-B  ', 8, 8);

          $date = substr($input, 0, 8);
          $product = substr($input, 8, 8);
          $amount = substr($input, 16);

          echo $date . '<br>' . PHP_EOL;
          echo $product . '<br>' . PHP_EOL;
          echo number_format($amount) . '<br>' . PHP_EOL;
        ?>
      </p>
    </div>
  </section>
  
</body>
</html>