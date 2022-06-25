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
          $scores = [
            'Mike' => 80,
            'Anna' => 70,
            'Matthew' => 60,
          ];

          $keys = array_keys($scores);
          print_r($keys);
          echo '<br>';

          $values = array_values($scores);
          print_r($values);
          echo '<br>';

          if (array_key_exists('Mike',$scores) === true) {
            echo 'Mike is here!' . '<br>';
          }
          if (in_array(80, $scores) === true) {
            echo '80 is here!' . '<br>';
          }

          echo array_search(70, $scores) . '<br>';
        ?>
      </p>
    </div>
  </section>
  
</body>
</html>