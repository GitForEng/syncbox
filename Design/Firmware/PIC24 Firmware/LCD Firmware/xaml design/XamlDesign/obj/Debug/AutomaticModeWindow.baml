   M S B A M L   `   `   `  ����J  FWpfApplication2, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null'clr-namespace:XamlDesign
XamlDesign  5   	   $    XamlDesign.AutomaticModeWindow   5   	   \ XPresentationFramework, Version=4.0.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35R NWindowsBase, Version=4.0.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35W SPresentationCore, Version=4.0.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35D 9http://schemas.microsoft.com/winfx/2006/xaml/presentation    5   	   R NSystem.Xaml, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089:x,http://schemas.microsoft.com/winfx/2006/xaml     5   	   @d2http://schemas.microsoft.com/expression/blend/2008     5   	   Jmc;http://schemas.openxmlformats.org/markup-compatibility/2006     5   	   *localclr-namespace:XamlDesign     5   	   c _Microsoft.Expression.Drawing, Version=4.5.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35=ed4http://schemas.microsoft.com/expression/2010/drawing  5   	     � Title$  AutomaticModeWindow��5	   	   $	��480��6%   $	��640��62    � 	Resources 5
      ��%    5      .��5      � $	��640��6   $	��480��6   ���	#FFAEAEAE.+�5   
   A� $
��Left=�6   $��10,125.63,0,204.37q�6-   
���   �$	��150��6X   $	��150��6d   ��5      �� 5       �� ImageSource$ /Resources/bu.png��6    J� Effect 5      3  -System.Windows.Media.Effects.DropShadowEffect  5         Color$
 Cyan��6#      
BlurRadius$ 60Q�60   5      %  Microsoft.Expression.Shapes.Arc  5   
      ArcThickness$ 12Q�6      ArcThicknessUnit$ Pixel=�6#      EndAngle$	 180Q�5      $
��Left=�6!   $��-221.894,-10,0,10q�5      	 �� Stretch$
	 None=�5      
   
StartAngle$
 0Q�5      $��437.6��5       J� RenderTransformOrigin$ 0.5,0.5&�5      $	��480��5      ���	#FF1DD4F7 5        5       $ 	#FF73D0EF��6#   $ 18Q�65      ShadowDepth$ 0Q�6E   5$      �� 5%   
   $
��Left=�6   $��80��6/   $��10,0,0,41.1q�6;   $
��Wrap=�6P   $��Bottom=�6d   $��131.5��6   #��� ��6�   $��14(�6�   ��6�   Z� �� 6�   $�Syncbox ��6  �� 6  �� 6!  $�Bogazici University��6%  �� 6B  �� 6N  $� 2018��6R  �� 6a  �� 6m  �� 6s  �� 6  6�  A� 5'   
   $��0,160.846,172.571,219.154q�6   
��� � �$	��100��6C   $��Right=�6O   $ 0.997,0.535&�6k   ��5(      �� 5)      $ Resources/Generator.jpg��6    5+        5,      $
 Lime��6#   $ 60Q�60   5.      A� 5/   
   $��Right=�6   $��0,160.846,45.109,219.154q�6.   
��� ���$	��100��6`   ��50      �� 51      $ Resources/radiation.png��6    53        54      $ Yellow��6$   $ 60Q�63   56      A� 57   
   $%��237.851,160.846,302.148,219.154q�6   
��� � �$	��100��6I   ��58      �� 59      $ Resources/actuator.jpg��6    5;        5<      $
 Lime��6$   $ 60Q�61   5>      A� 5?   
   $��Right=�6   $��0,0,45.109,53.554q�6.   $	��100��6J   $	��100��6V   $��Bottom=�6c    � Cursor$
 None��6~   ��5@      �� 5A       �� 
TargetType" A�6    �� Triggers 5B      P� 5C       P� Property �@J�IsMouseOver P� Value . . �5D      ��  �� Property � �� �� Value 5E   "   �� 5F   &   $ Resources/homepressed.png��61   5H      5I      P� 5J       �@J�IsMouseOver .  . �5K      ��  � �� 5L   "   �� 5M   &   $  Resources/diactivehome.png��61   5O      5P      5S      5U      5X      5Y      