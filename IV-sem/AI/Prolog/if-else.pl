getMax(X, Y, Max):-
    (
    	X > Y->  
    	Max is X
    ;   
    	Max is Y
    ).


/*
        Query
getMax(5, 10).
*/