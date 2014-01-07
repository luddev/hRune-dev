hRune-dev  

=== Documentation ===  


base Class cGameObject derives Coordinates, some Initialization,  

cGameObject   
	-> think()  
	-> draw()  
	position. (x, y, w, h)  
  
-> cPlayer  
	-> think()	//Handles Logic   
	-> draw() 	//Draw calls  
-> cTile  
-> cEnemy (different class for each kind enemy)  
-> cCamera  
  
cEngine   
-> Init Everything.  
-> Manages gameObject.  
-> Manages State.   
  
cState  
-> Set State  
-> Switch State  
  
  
cRenderer  
-> Scene should be rendered by engine as per state.  
-> Rendering function (every object should render itself)  
  
cMap  
-> load Map from File.  