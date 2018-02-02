# BTLayout
一个简单易用的相对布局工具，基于frame布局实现

# Example
```
- (void)viewDidLayoutSubviews
{
    [super viewDidLayoutSubviews];
    
    [self.view0 widthAsParentMarginsLeft:self.view.sWidth/2 right:10];  //设置尺寸 宽度与父View对齐，靠右边距10，左侧居中
    self.view0.sHeight = 50;                    //设置尺寸 高度50
    [self.view0 pAlignParentBottomOffset:-10];  //设置位置 位置与父View对齐，靠父View底部，偏移-10
    
    self.view1.pOrigin = CGPointMake(10, 30);   //设置位置
    [self.view1 sLeftTo:self.view0 margin:0];   //设置尺寸 右侧在view0左距离0
    [self.view1 sAbove:self.view0 margin:-self.view0.sHeight/2];    //设置尺寸 右侧在view0上距离（view0的负半高）
    
    [self.view2 pRightTo:self.view1 margin:10]; //设置位置 在view1右侧距离10
    [self.view2 sAlignRight:self.view0];        //设置尺寸 右侧与view0右侧对齐
    [self.view2 sAlignTop:self.view1];          //设置尺寸 上侧与view1上侧对齐
    [self.view2 sAbove:self.view0 margin:10];   //设置尺寸 底部在view0上距离10
}
```
竖屏的效果如下
<br/>
<img src="https://github.com/britayin/BTLayout/blob/master/Images/Portrait.png?raw=true" width = "300" alt="竖屏" align=left />
<br/>
横屏的效果如下
<br/>
<img src="https://github.com/britayin/BTLayout/blob/master/Images/Landscape.png?raw=true" width = "500" alt="竖屏" align=left />
