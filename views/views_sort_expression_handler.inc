<?php

/**
 * @file
 * Filter classes.
 *
 * These classes are always used together, so we keep them in the same file.
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
    return $options;
  }

  /**
   * {@inheritdoc}
   */
  public function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
    $form['expression'] = [
      '#type' => 'textarea',
      '#title' => t('Expression'),
      '#default_value' => $this->options['expression'],
      '#description' => t('<b>This is an advanced sort handler.</b> You can use whatever is available on the SQL. If what you need is not on the query, you could add other sort handlers in the end that will make some others to be available. You should probably want to enable "Show the SQL query" on the <a href=":url">settings</a> page.', array(':url' => url('admin/structure/views/settings'))),
    ];
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
