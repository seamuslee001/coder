<nav aria-labelledby="breadcrumb_title" class="breadcrumb" role="navigation">
<p class="hide" id="breadcrumb_title"><?php echo t('You are here'); ?> </p>
  <ul class="breadcrumb">
    <li><?php echo implode('</li><li> ', $variables['breadcrumb']); ?></li>
  </ul>
</nav>
