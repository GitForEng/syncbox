   M S B A M L   `   `   `  ����J  FWpfApplication2, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null'clr-namespace:XamlDesign
XamlDesign  5   	       XamlDesign.MainWindow   5   	   \ XPresentationFramework, Version=4.0.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35R NWindowsBase, Version=4.0.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35W SPresentationCore, Version=4.0.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35D 9http://schemas.microsoft.com/winfx/2006/xaml/presentation    R NSystem.Xaml, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089:x,http://schemas.microsoft.com/winfx/2006/xaml     5   	   @d2http://schemas.microsoft.com/expression/blend/2008     5   	   Jmc;http://schemas.openxmlformats.org/markup-compatibility/2006     5   	   *localclr-namespace:XamlDesign     5   	   c _Microsoft.Expression.Drawing, Version=4.5.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35=ed4http://schemas.microsoft.com/expression/2010/drawing  5   	     � Title$  
MainWindow��5	   	   $	��480��6   $	��640��6)    � 	Resources 5
         RoundCorner �� 
TargetType �� Property �� Value �� 
TargetType �Name ��Name �� CornerRadius	 
� GradientOrigin
 �� RelativeTransform �� CenterX �� CenterY �� ScaleX �� ScaleY T� X T� Y � Offset � Color �� Triggers P� Property P� Value �� 
TargetName3  -System.Windows.Media.Effects.DropShadowEffect   Color   	Direction   ShadowDepth   
BlurRadius   Opacity��%  &	        �� 5   
   " ��6$   .�5      ��  � ��$ Center=�6;   �� 5       � ��$ Center=�69   �� 5       � ��$ 1q�6(   �� 5       � �� 5      �� 5      " ��6&   .R�5      � $
 grid��6   .+�5      �� $ border��6%   $ 8��65   
���   �$��2q�6Z   ��5   "   
� 5   &   $	 0.496,1.052&�6:   
 5   *   V� 5   .   .~�5   2   �� $	 0.5Q�6A   $	 0.5Q�6O   $	 1.5Q�5   9   $	 1.5Q�6F   T� 5   2   $
 0.02Q�6E   $	 0.3Q�6N   5   /   .��5   *   � $ 1Q�67   $ 	#00000000��6B   � 5   *   $	 0.3Q�67   $ 	#FFFFFFFF��6D   5   '   ._�5!   "   �� $��Center=�63   $��Center=�5"   +   $
��Bold"�5#   +   5$   #   5%      5&       5'      P� 5(       � �� .  . �5)   "   �� $ border��6?    � �� 5*   &   
� 5+   *   $	 0.496,1.052&�6>   
 5,   .   V� 5-   2   .~�5.   6   �� $	 0.5Q�6E   $	 0.5Q�6S   $	 1.5Q�6a   $	 1.5Q�6n   T� 5/   6   $
 0.02Q�6I   $	 0.3Q�6R   50   3   .��52   .   � $ 	#00000000��6;   $	 1.5Q�6M   � 53   .   $ 	#FF58FF18��6;   $	 0.3Q�6M   54   +   56   #   57      P� 58       �@J�IsMouseOver .  . �59   "   �� $ border��6@    � �� �	#FF62FA566T   �� 5:   "    �@J�Effect 5;   &     5<   *   $ Black��6;   $	 320Q�6I   $ 3Q�6Y   $ 5Q�6i   $	 0.5Q�6x   5>   #   5?      P� 5@       � {� .  . �5A   "   �� $
 grid��6<    �@J�Opacity$
 0.25Q�6N   5B      5E      5G      5H      5J      .��5K      � $	��640��6   $	��480��6   ���	#FFAEAEAE.+�5L   
   A� $
��Left=�6   $��10,125.63,0,204.37q�6-   
���   �$	��150��6X   $	��150��6d   ��5M      �� 5N       �� ImageSource$ /Resources/bu.png��6    J� Effect 5P        5Q      $
 Cyan��6#   $ 60Q�60   5S      %  Microsoft.Expression.Shapes.Arc  5T   
      ArcThickness$ 12Q�6      ArcThicknessUnit$ Pixel=�6#       EndAngle$	  180Q�5U      $
��Left=�6!   $��-221.894,-10,0,10q�5V      ! �� Stretch$
! None=�5W      "   
StartAngle$" 0Q�5X      $��437.6��5Y      # J� RenderTransformOrigin$# 0.5,0.5&�5Z      $	��480��5[      ���	#FF1DD4F7 5^        5_      $ 	#FF73D0EF��6#   $ 18Q�65   $ 0Q�6E   5c      �� 5d   
   $
��Left=�6   $��80��6/   $��10,0,0,41.1q�6;   $
��Wrap=�6P   $��Bottom=�6d   $��131.5��6   #��� ��6�   $��14(�6�   ��6�   Z� �� 6�   $�Syncbox ��6  �� 6  �� 6!  $�Bogazici University��6%  �� 6B  �� 6N  $� 2018��6R  �� 6a  �� 6m  �� 6s  �� 6  6�  �� 5f   
   -   5        #���   5f      $��Automatic mode��67   $
��63.6��6P   $��255.906,125.63,75.694,0q�6^   $	��Top=�6   $��Bell MT)�6�   $��36(�6�   $
��Bold"�6�   #��� ��6�   $ � Cursor$
$ None��6(  �� 5g   
   -   5        #���   5g      $��Service mode��67   $"��255.906,212.03,75.694,204.37q�6N   $��Bell MT)�6t   $��36(�6�   $
��Bold"�6�   $
$ None��6�   6�   5j      5k      