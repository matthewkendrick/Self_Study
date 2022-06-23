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

        function sum($a, $b, $c) {
           $total =  $a + $b + $c;

          //  if ($total < 0) {
          //    return 0;
          //  } else {
          //    return $total;
          //  }

          // 上記と同じ結果を得ることができる
           return $total < 0 ? 0 : $total;
         }

         echo sum(100, 200, 300) . "<br>" . PHP_EOL;
         echo sum(-1000, 300, 500) . "<br>" . PHP_EOL;
        ?>
      </p>
    </div>
  </section>
  
</body>
</html>