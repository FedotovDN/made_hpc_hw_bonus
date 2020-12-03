# made_hpc_hw_bonus
libfunc.so - вынесена функция в C-библиотеку для CTYPES (исходные коды здесь: func.c, func.h).
<br>
В Jupyter-ноутбуке SALib.ipynb представлен весь остальной код по ДЗ.

Отдельно в таблицу вывожу результаты времени выполнения функции evaluate_model:

<table>
  <tr>
    <th>кол-во сэмплов
    <th>NAIVE
    <th>NUMBA
    <th>CTYPES
    <th>10-threads
  </tr>
  <tr>
    <td>1000
    <td>0.023
    <td>0.224
    <td>0.046
    <td>0.0069
  </tr>
  <tr>
    <td>10000
    <td>0.224
    <td>0.055
    <td>0.17
    <td>0.102
  </tr>
  <tr>
    <td>100000
    <td>2.236
    <td>0.53
    <td>1.85
    <td>1.0
  </tr>
  <tr>
    <td>1000000
    <td>22.305
    <td>5.47
    <td>17.3
    <td>12.93
  </tr>
</table>
