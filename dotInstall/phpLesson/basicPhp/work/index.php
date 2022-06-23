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
          
          function showAd($message = 'Ad')
          {
            echo '------------<br>' . PHP_EOL;
            echo '----- '. $message .' -----<br>' . PHP_EOL;
            echo '------------<br>' . PHP_EOL;
          }

          showAd('Header Ad');
          echo 'Tom is great!<br>' . PHP_EOL;
          echo 'Bob is great!<br>' . PHP_EOL;
          showAd('Ad');
          showAd();
          echo 'Steve is great!<br>' . PHP_EOL;
          echo 'Bob is great!<br>' . PHP_EOL;
          showAd('Footer Ad');
        ?>
      </p>
    </div>
  </section>
  
</body>
</html>