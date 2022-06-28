<?php

  $today = date('Y-m-d H:i:s l');

?>
<!DOCTYPE html>
<html lang="ja">
<head>
  <meta charset="utf-8">
  <link rel="stylesheet" href="./css/styles.css">
  <title>PHP Practice</title>
</head>
<body>
  <section>
    <div class="text">
      <p>Hello, PHP!</p>
      <p>Today: <?php echo date('Y-m-d H:i:s l'); ?></p>
      <p>Today: <?= date('Y-m-d H:i:s l'); ?></p>
      <p>Today: <?= $today; ?></p>
    </div>
  </section>
</body>
</html>