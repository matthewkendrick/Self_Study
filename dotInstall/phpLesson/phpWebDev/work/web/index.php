<?php

  require('../app/functions.php');

  $today = date('Y-m-d H:i:s l');
  $name = [
  ];

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
      <p><?= $today ?></p>
      <ul class="">
        <?php if (empty($names)) { ?>
          <li>Nobody!</li>
        <?php } else { ?>
        <?php foreach ($names as $name) { ?>
            <li><?= h($name) ?></li>
        <?php } ?>
        <?php } ?>
      </ul>
    </div>
  </section>
</body>
</html>