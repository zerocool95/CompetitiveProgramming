stack<pair<int, int> > st;

void push(x){
	if(st.empty()){
		st.push(make_pair(x,x));
	}
	else{
		st.push(make_pair(x, max(x, st.top().second)));
	}
}

void pop(){
	st.pop();
}

int getMax(){
	if(st.empty()) // Error
	return st.top().second;
}
