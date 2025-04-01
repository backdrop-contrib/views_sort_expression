<?php
/**
 * @file
 *
 * The Views Sort Expression Handler definition.
 */

/**
 * Generic views handler filter to add code to manipulate the query object.
 */
class views_sort_expression_handler extends views_handler_sort {
  /**
   * {@inheritdoc}
   */
  public function option_definition() {
    $options = parent::option_definition();
    $options['expression'] = array('default' => NULL);
    $options['aggregate'] = array('default' => NULL);
    return $options;
  }

  /**
   * {@inheritdoc}
   */
  public function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
    $form['expression'] = array(
      '#type' => 'textarea',
      '#title' => t('Expression'),
      '#default_value' => $this->options['expression'],
      '#description' => t('<b>This is an advanced sort handler.</b> You can use whatever is available on the SQL. If what you need is not on the query, you could add other sort handlers in the end that will make some others to be available. You should probably want to enable "Show the SQL query" on the <a href="!url">settings</a> page.', array('!url' => url('admin/structure/views/settings'))),
    );
    $form['aggregate'] = array(
      '#type' => 'checkbox',
      '#title' => t('Expression has an aggregate function'),
      '#default_value' => $this->options['aggregate'],
      '#description' => t('This allows you to use an <a href="https://www.w3schools.com/sql/sql_groupby.asp">aggregate function</a> on the expression, instead of relying on the views aggregation plugins which doesn\'t otherwise work nicely with this sort handler.'),
    );
  }

  /**
   * {@inheritdoc}
   */
  public function use_group_by() {
    return FALSE;
  }

  /**
   * {@inheritdoc}
   */
  public function query() {
    if (!empty($this->options['expression'])) {
      $alias = $this->real_field . '_' . $this->position;
      $this->query->add_orderby(NULL, $this->options['expression'], $this->options['order'], $alias);
    }
  }
}
