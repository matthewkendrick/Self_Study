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
          $input = 'Call us at 03-3001-1256 or 03-3015-3222';
          $pattern = '/\d{2}-\d{4}-\d{4}/';

          preg_match_all($pattern, $input, $matches) . '<br>';
          // print_r($matches) . '<br>' . PHP_EOL;

          $input = preg_replace($pattern, '**-****-****', $input);
          echo $input . '<br>' . PHP_EOL;
        ?>
      </p>
    </div>
  </section>
  
</body>
</html>