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
          $score = 60;
          $name = 'Anna';

          if ($score >= 90 && $name === 'Anna') {
              echo 'Good Job!' . PHP_EOL;
          } else {
            echo 'Who are you?';
          }
        ?>
      </p>
    </div>
  </section>
  
</body>
</html>