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
          $hp = 100;

          while ($hp > 0) {
            echo " Your HP: $hp<br>" . PHP_EOL;
            $hp -= 10;
          }

          // 一度は実行してくれる
          // そのためこちらのコードではHP:0が表示される
          do {
            echo " Your HP: $hp<br>" . PHP_EOL;
            $hp -= 10;
          } while ($hp > 0);
        ?>
      </p>
    </div>
  </section>
  
</body>
</html>