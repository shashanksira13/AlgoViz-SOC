
// Returns all nodes in the order in which they were visited and
// Returns pointers to their previous node allowing us to compute the shortest path
//Dijkstra's Algorithm is weighted and guarantees the shortest path
export function Dijkstra (grid, startNode, finishNode) {
    if (!startNode || !finishNode || startNode === finishNode) {
      return false;
    }
    startNode.distance=0;
    let sptSet=[];
    let unvisitedNodes=[];
    unvisitedNodes = getAllNodes(grid);

    while(unvisitedNodes.length)
{

unvisitedNodes.sort((a,b)=>a.distance - b.distance);
let closestNode=unvisitedNodes.shift();

if(closestNode.isWall)continue;
closestNode.isVisited=true;
//We have reached a dead end
if (closestNode.distance === Infinity) return sptSet;

sptSet.push(closestNode);

//All required nodes processed
if (closestNode === finishNode) return sptSet;

updateUnvisitedNeighbourNodes(closestNode,grid);

}
}
function getAllNodes()
{
  let allnodes = [];
  for (let row of allnodes) {
    for (let node of row) {
      allnodes.push(node);
    }
  }
  return allnodes;

}

function updateUnvisitedNeighbourNodes(node, grid) {
    const unvisitedNeighbors = getUnvisitedNeighbourNodes(node, grid);
    for (const neighbor of unvisitedNeighbors) {
      neighbor.distance = node.distance + 1;
      neighbor.previousNode = node;
    }
  }
  
  function getUnvisitedNeighbourNodes(node, grid) {
    let neighbourNodes = [];
    let { row, col } = node;
    if (row !== grid.length - 1) neighbourNodes.push(grid[row + 1][col]);
    if (col !== grid[0].length - 1) neighbourNodes.push(grid[row][col + 1]);
    if (row !== 0) neighbourNodes.push(grid[row - 1][col]);
    if (col !== 0) neighbourNodes.push(grid[row][col - 1]);
    return neighbourNodes.filter(
      (neighbourNode) => !neighbourNode.isWall && !neighbourNode.isVisited
    );
    }

















