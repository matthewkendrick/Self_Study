<!DOCTYPE html>
<html lang="ja">
<head>
  <meta charset="UTF-8">
  <meta http-equiv="X-UA-Compatible" content="IE=edge">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <link rel="stylesheet" href="../css/stylesheet.css">
  <title>Document</title>
</head>
<body>
  <section>
    <div class="text">
      <p>
        <?php
          $signal = 'blue';

          if ($signal === 'red') {
            echo 'Stop!' . PHP_EOL;
          } elseif ($signal === 'yellow') {
            echo 'Caution!' . PHP_EOL;
          } elseif ($signal === 'blue') {
            echo 'Go' . PHP_EOL;
          }          

          echo '<br>';

          switch ($signal) {
            case 'red':
              echo 'Stop!';
              break;
            case 'yellow':
              echo 'Caution!';
              break;
            case 'blue':
              echo 'Go';
              break;
          }
        ?>
      </p>
    </div>
  </section>
  
</body>
</html>