for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(vis[i][j] == 0){
                
                my_queue.push({i,j});
                vis[i][j] = true;
                char c = board[i][j];
                cnt++;
                while (!my_queue.empty()){
                    auto cur = my_queue.front(); my_queue.pop();
                    for (int dir = 0; dir < 4; dir++){
                        int nx = cur.X + dx[dir];
                        int ny = cur.Y + dy[dir];
                        if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
                        if(board[nx][ny] != board[cur.X][cur.Y]){
                            if((board[nx][ny] == 'R' && board[cur.X][cur.Y] == 'G') || (board[nx][ny] == 'G' && board[cur.X][cur.Y] == 'R')){
                                if(vis[nx][ny]) continue;
                                vis[nx][ny] = true;
                                my_queue.push({nx,ny});
                                continue;
                            }else{
                                continue;
                            }
                        }
                        if(vis[nx][ny])
                        vis[nx][ny] = true;
                        my_queue.push({nx,ny});
                    }
                }  
            } 
        }
    }
    cout << cnt;