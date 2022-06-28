<?php

  $today = date('Y-m-d H:i:s l');
  $name = 'Anna';

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
      <p>Hello, <?= htmlspecialchars($name, ENT_QUOTES, 'UTF-8'); ?></p>
    </div>
  </section>
</body>
</html>